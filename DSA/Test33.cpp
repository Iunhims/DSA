#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Position {
    int x, y, cost;
    Position(int x, int y, int cost) : x(x), y(y), cost(cost) {}
};

bool isValid(int x, int y, int N) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}

int minKnightPath(vector<vector<int>>& board, int x1, int y1, int x2, int y2) {
    int N = board.size();

    // Các bước di chuyển của quân mã
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

    // Tạo một mảng để lưu trữ chi phí tối thiểu để đến từng ô
    vector<vector<int>> dist(N, vector<int>(N, INT_MAX));
    dist[x1][y1] = board[x1][y1];

    // Tạo hàng đợi BFS
    queue<Position> q;
    q.push(Position(x1, y1, board[x1][y1]));

    while (!q.empty()) {
        Position current = q.front();
        q.pop();

        // Nếu đã đến vị trí đích thì trả về kết quả
        if (current.x == x2 && current.y == y2) {
            return current.cost;
        }

        // Kiểm tra tất cả các bước đi của quân mã
        for (int i = 0; i < 8; ++i) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];
            if (isValid(nx, ny, N) && current.cost + board[nx][ny] < dist[nx][ny]) {
                dist[nx][ny] = current.cost + board[nx][ny];
                q.push(Position(nx, ny, dist[nx][ny]));
            }
        }
    }

    // Trường hợp không thể đến đích
    return -1;
}

int main() {
	int T;
	cin>>T;
	while(T--){
		int N;
   
    cin >> N;

    vector<vector<int>> board(N, vector<int>(N));
    
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    int x1, y1, x2, y2;
   
    cin >> x1 >> y1;
   
    cin >> x2 >> y2;

    // Chuyển đổi tọa độ từ 1-based index sang 0-based index
    x1--; y1--; x2--; y2--;

    int result = minKnightPath(board, x1, y1, x2, y2);
    if (result != -1) {
        cout  << result << endl;
    } else {
        cout << "-1" << endl;
    }
	}
    return 0;
}
