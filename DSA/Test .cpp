#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Hàm tìm LCS của hai xâu
int findLCS(const std::string& A, const std::string& B) {
    int m = A.size();
    int n = B.size();
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

// Hàm tìm độ dài của xâu mẹ chung ngắn nhất
int findSCSLength(const std::string& A, const std::string& B) {
    int lcsLength = findLCS(A, B);
    return A.size() + B.size() - lcsLength;
}

int main() {
	int t;
	std::cin>>t;
	while(t--){
		std::string A1 ;
    std::string B1 ;
    
    std::cin>>A1>>B1;
    int scsLength1 = findSCSLength(A1, B1);
    //int scsLength2 = findSCSLength(A2, B2);
    
    std::cout  << scsLength1 << std::endl;
  //  std::cout<< scsLength2 << std::endl;
	}
	
    

    return 0;
}
