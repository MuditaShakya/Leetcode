class Solution {
public:
    vector<double> convertTemperature(double celsius) {
         vector<double> a;
        double f= (celsius*1.8)+32;
        double k= celsius+273.15;
       // float ff=(float)f;
        // float kk=(float)k;
            a.push_back(k);
        a.push_back(f);
        return a;
    }
};