#include<stdio.h>
int main(){
float costPrice, sellingPrice, profitLoss, percentage;
printf("Enter Cost Price: ");
scanf("%f", &costPrice);
printf("Enter Selling Price: ");
scanf("%f", &sellingPrice);

if(sellingPrice > costPrice){
    profitLoss = sellingPrice - costPrice;
    percentage = (profitLoss / costPrice) * 100;
    printf("Profit of %f\n", profitLoss);
    printf("Profit Percentage is %f%%\n");
}
else if(costPrice > sellingPrice){
    profitLoss = costPrice - sellingPrice;
    percentage = (profitLoss / costPrice) * 100;
    printf("Loss of %f\n", &profitLoss);
    printf("Loss Percentage is %f%%\n", percentage);
}
else{
    printf("Neither Profit Nor Loss.");
}

    return 0;
}

