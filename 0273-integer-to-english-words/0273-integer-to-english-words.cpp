class Solution {
vector<string>belowten = { "","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
vector<string>belowtwenty = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
vector<string>belowhun ={ "","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
public:
string numberToWords(int num) {
        if(num==0){
            return "Zero";
        }
        else if (num<10){//6,7
            return belowten[num];
        }
        else if(num<20){//11,19
             return belowtwenty[num-10];
        }
        else if(num<100){//40,99
            return belowhun[num/10] + (num%10!=0?" "+belowten[num%10]:"");
        }
        else if(num<1000){//536,990
             return belowten[num/100] + " Hundred" + (num%100!=0?" "+numberToWords(num%100):"");
        }
        else if(num<1000000){//536990,90000
             return numberToWords(num/1000) + " Thousand" + (num%1000!=0?" "+numberToWords(num%1000):"");
        }
          else if(num<1000000000){//66 536 990,9 000 000
             return numberToWords(num/1000000)  + " Million" + (num%1000000!=0?" "+numberToWords(num%1000000):"");
        }
                     return numberToWords(num/1000000000) + " Billion" + (num%1000000000!=0?" "+numberToWords(num%1000000000):"");


    }
};