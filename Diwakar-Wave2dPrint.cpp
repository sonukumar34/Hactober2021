#include<iostream>
#include<vector>
int main(){
    int testCases;
    std::cin>>testCases;
    std::vector<int> ans;
    std::vector<std::vector<int>> finalAns;

    while(testCases >0)
    {
        int a,b;
        std::cin>>a>>b;
        int input[a][b];

        //take input
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                std::cin>>input[i][j];
            }
        }

        for(int i=0;i<b;i++){
            if(i%2 == 0){
                for(int j=0;j<a;j++){
                    ans.push_back(input[j][i]);
                }
            }
            else{
                for(int j=a-1;j>=0;j--){
                    ans.push_back(input[j][i]);
                }
            }
        }
        finalAns.push_back(ans);
        ans.clear();
        testCases--;
    }

    for(auto i:finalAns){
        for(auto j:i){
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}


