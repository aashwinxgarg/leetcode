class Solution {
public:
    int subtractProductAndSum(int n) {
    int sum=0,product=1;
    for(int i=1;n>0;i++){
        int iter=n%10;
        sum=sum+iter;
        product=product*iter;
        n=n/10;
    }
    int res=product-sum;
    return res;
}
};