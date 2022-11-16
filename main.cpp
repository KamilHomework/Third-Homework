#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

#define G 9.8

using namespace std;


void firstTask(){
    cout << "______First task________" << endl;
    int x;
    double y=0;
    cout << "Number of X :";
    cin >> x;
    for (int i=0;i<x;i++){
        double Z,B,A,T;
        cout << "Z, B, A, Deg values :";
        cin >> Z >> B >> A >> T;
        y+= (Z*Z*Z) - B + (A*A)/(tan(T)*tan(T));
    }
    cout << "Y = " << y << endl;
}

void secondTask(){
    cout << "______Second task________" << endl;
    int n,k;
    int sum=0;
    cout << "Enter N, K :";
    cin >> n >> k;
    for (int i=1;i<=n;i++){
        sum+= pow(i,k);
    }
    cout << "Sum : " << sum << endl;
}

void thirdTask(){
    cout << "______Third task________" << endl;
    int s;
    cout << "Enter two-digit number :";
    cin >> s;
    cout <<(((s%10)>=(s-s%10)) ? s%10 : s/10) << " - larger number"<< endl;
    cout <<(((s%10)<(s-s%10)) ? s%10 : s/10) << " - smaller number"<< endl;
}

void fourthTask(){
    cout << "______Fourth task________" << endl;
    double v,t;
    cout << "Enter velocity and time :";
    cin >> v >> t;
    cout << "angle :" << asin(G*t/(2*v))*(90/asin(1)) << endl;
}

void fifthTask(){
    cout << "______Fifth task________" << endl;
    int n,p,s=1;
    cout << "Enter number and power :";
    cin >> n >> p;
    for (int i=0;i<p; i++){
        s*=n;
    }
    cout << "number :" << s << endl;
}

void sixthTask(){
    cout << "______Sixth  task________" << endl;
    int n;
    string s;
    cout << "Monday "<< "Tuesday "<< "Wednesday "<< "Thursday "<< "Friday "<< "Saturday "<< "Sunday " << endl;
    cout << "Enter day number :";
    cin >> n;
    switch(n) {
        case 1:
            s="Monday";
            break;
        case 2:
            s="Tuesday";
            break;
        case 3:
            s="Wednesday";
            break;
        case 4:
            s="Thursday";
            break;
        case 5:
            s="Friday";
            break;
        case 6:
            s="Saturday";
            break;
        case 7:
            s="Sunday";
            break;
        default:
            s="None";
    }
    cout << "number :" << s << endl;
}

void seventhTask(){
    cout << "______Seventh task________" << endl;
    double x, y, z;
    cout << "Enter x, y and z coordinates :";
    cin >> x >> y >> z;
    cout << "length :" << sqrt(pow(x,2)+pow(y,2)+pow(z,2)) << endl;
}

double recreatedPow(double x, double m){
    double answer=1;
    for (double i=0;i<m; i++){
        answer*=x;
    }
    return answer;
}
void eighthTask(){
    cout << "______Eighth task________" << endl;
    double m=1;
    while (m<5){
        cout << "For m=" << m << endl;
        double x=-1.1;
        while (x<0.3){
            cout << "\t"<< "For x=" << x << " : " << recreatedPow(x,m)*recreatedPow((sin((x*m))),m)<<endl;
            x+=0.2;
        }
        m+=1;
    }
}

void ninthTask(){
    cout << "______Ninth task________" << endl;
    int n;
    double sum=0;
    cout << "Enter array len :";
    cin >> n;
    double *arr = new double[n];
    for (int i=0;i<n; i++){
        cin >> arr[i];
        if (fabs(arr[i]) > 2.5){
            sum+=pow(arr[i],2);
        }
    }
    delete [] arr;
    cout << "Sum :" << sum << endl;
}

void tenthTask(){
    cout << "______Tenth task________" << endl;
    double x,y;
    cout << "Enter x and y :";
    cin >> x >> y;
    cout << "Answer :" << pow((1-tan(x*M_PI/180)),(1/tan(x*M_PI/180))) + cos(x*M_PI/180-y*M_PI/180) << endl;
}

void twelfthTask(){
    cout << "______Twelfth Task________" << endl;
    double x,y;
    cout << "Enter x and y :";
    cin >> x >> y;
    cout << "Quarter :" << ((x>0) ? ((y>0) ? "First" : "Fourth") : ((y>0) ? "Second" : "Third"))  << endl;
}

void thirteenthTask(){
    cout << "______Thirteenth Task________" << endl;
    int x;
    cout << "Enter tree-digit number :";
    cin >> x;
    cout << ((x%10==x/10%10 || x%10==x/100 || x/100==x/10%10) ? "Among the digits of the number there are the same" : "None of the digits are the same")  << endl;
}

void fourteenthTask(){
    cout << "______Fourteenth Task________" << endl;
    char text[] = "test\ntest\ntest#gdg\nsas";
    int count=1;
    bool flag=false;
    for (int i=0;!flag;i++){
        flag = text[i]=='#';
        count += text[i]=='\n';
    }
    cout << "Number of lines :" << count << endl;
}

void fifteenthTask(){
    cout << "______Fifteenth Task________" << endl;
    int wallX,wallY,brickX,brickY,brickZ;
    cout << "Enter wallX,wallY,brickX,brickY,brickZ :";
    cin >> wallX >> wallY >> brickX >> brickY >> brickZ;
    cout << ((wallX>=brickX and wallY>=brickY) ? "Yes" : ((wallX>=brickX and wallY>=brickZ) ? "Yes" : (wallX>=brickY and wallY>=brickX) ? "Yes" : (wallX>=brickY and wallY>=brickZ) ? "Yes" : (wallX>=brickZ and wallY>=brickX) ? "Yes" : (wallX>=brickZ and wallY>=brickY) ? "Yes": "No"))  << endl;
}

void seventeenthTask(){
    cout << "______Seventeenth Task________" << endl;
    int x;
    string text;
    cout << "Enter text and index :";
    cin >> text >> x;
    cout << text[x-1] << endl;
}

void eighteenthTask(){
    cout << "______Eighteenth Task________" << endl;
    cout.unsetf(ios::dec);
    cout.setf( ios::hex);
    int x;
    cout << "Enter decimal number :";
    cin >>  x;
    cout <<  "Hexadecimal number :" << x << endl;
    cout.unsetf(ios::hex);
    cout.setf( ios::dec);
}

void nineteenthTask(){
    cout << "______Nineteenth Task________" << endl;
    int x;
    cout << "Enter five-digit number :";
    cin >>  x;
    cout <<  ((x/10000==x%10 && x/1000%10==x/10%10) ? "Yes" : "No" ) << endl;
}

void twentiethTask(){
    cout << "______Twentieth Task________" << endl;
    double a,b,h;
    cout << "Enter start, end and step numbers :";
    cin >>  a >> b >> h;
    cout << "y=";
    for (;a<=b;a+=h){
        cout << pow((1/tan(log(a)*M_PI/180)),2) << ";";
    }
    cout << endl;
}

void twentyfirstTask(){
    cout << "______Twentyfirst Task________" << endl;
    int a,b,c,sum=0;
    cout << "1)How many cat lives? :" << endl << "Answers :" << endl << "-> 3 lives"<< endl << "-> 5 lives"<< endl << "-> 7 lives" << endl << "Your answer :";
    cin >>  a;
    switch (a){
        case 1:
            sum+=1;
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }
    cout << "1)How many dog lives? :" << endl << "Answers :" << endl << "-> 3 lives"<< endl << "-> 5 lives"<< endl << "-> 7 lives" << endl << "Your answer :";
    cin >>  b;
    switch (b){
        case 1:
            break;
        case 2:
            break;
        case 3:
            sum+=1;
            break;
        default:
            break;
    }
    cout << "1)How many Begemot lives? :" << endl << "Answers :" << endl << "-> 3 lives"<< endl << "-> 5 lives"<< endl << "-> 7 lives" << endl << "Your answer :";
    cin >>  c;
    switch (c){
        case 1:
            break;
        case 2:
            sum+=1;
            break;
        case 3:
            break;
        default:
            break;
    }
    cout << "Total Points:" << sum << endl;
}

void twentysecondTask(){
    cout << "______Twentysecond Task________" << endl;
    srand(time(NULL));
    int h,g,sum=0;
    cout << "Enter matrix height and width :" << endl;
    cin >>  h >> g;
    int **matrix = new int *[h];
    for (int i=0;i<h;i++){
        matrix[i] = new int[g];
    }
    for (int i=0;i<h;i++){
        for (int j=0;j<g;j++){
            matrix[i][j] = rand()%100;
            sum+= (i==j)?matrix[i][j]:0;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "sum of the elements of the main diagonal :" << sum << endl;
    for (int i=0;i<g;i++){
        delete [] matrix[i];
    }
    delete [] matrix;
}

void twentythirdTask(){
    cout << "______Twentythird Task________" << endl;
    int h;
    float sum=0;
    cout << "Enter array length :";
    cin >>  h;
    float *matrix = new float [h];
    for (int i=0;i<h;i++){
        cin >> matrix[i];
        sum+= matrix[i];
    }
    cout << "Average number :" << sum/h << endl;
}

void twentyfourthTask(){
    cout << "______Twentyfourth Task________" << endl;
    int n;
    float sum=0;
    cout << "Enter n :";
    cin >>  n;
    for (int i=1;i<=n;i++){
        float den=0;
        for (int j=1;j<=n;j++){
            den += sin(j*M_PI /180);
        }
        sum+=1/den;
    }
    cout << "Sum :" << sum << endl;
}

void twentyfifthTask(){
    cout << "______Twentyfifth Task________" << endl;
    int n,i=5,sum=0;
    cout << "Until what number to count the amount :";
    cin >>  n;
    while (i<=n){
        sum+=i;
        i+=5;
    }
    cout << "Sum :" << sum << endl;
}

void twentysixthTask(){
    cout << "______Twentysixth Task________" << endl;
    cout << "Number" << "\t" <<  "Square" << endl <<"------" << "\t"
    <<"------"<< endl <<"1" << "\t" <<"1" << endl <<"2"
    << "\t" << "4" << endl<<"3" << "\t" <<"9"<< endl <<"4" << "\t"
    <<"16"<< endl <<"5" << "\t" <<"25" << endl;
}

void twentyseventhTask(){
    cout << "______Twentyseventh Task________" << endl;
    cout.width(15);
    int n;
    cout << "Enter number :";
    cin >>  n;
    for (int i=1;i<=10;i++){
        cout <<i << " * " << n << " = "<< i*n << endl;
    }
}

void twentyeighthTask(){
    cout << "______Twentyeighth Task________" << endl;
    float discr,x1,x2,a,b,c,d,k;
    cout << "Enter first and second equation coefficients :";
    cin >>  a >> b >> c >> d >> k;
    discr = pow(b-d,2)-4*a*(c-k);
    x1=(-(b-d)+sqrt(discr))/(2*a);
    x2=(-(b-d)-sqrt(discr))/(2*a);
    (discr>0) ? cout<<x1<<":"<<d*x1+k<<"\t"<<x2<<":"<<d*x2+k : (discr==0)?cout<<x1<<":"<<d*x1+k:cout<<"No solutions";
    cout << endl;
}

void twentyninthTask(){
    cout << "______Twentyninth Task________" << endl;
    float n;
    cout << "Enter number :";
    cin >>  n;
    cout << ((n == (int)n)?"Integer":"Float") << endl;
}

void thirtiethTask(){
    cout << "______Thirtieth Task________" << endl;
    int n;
    do{
        cout << "Enter number :";
        cin >>  n;
    }while(n!=1);
    cout << endl;
}

void thirtyfirstTask(){
    cout << "______Thirtyfirst Task________" << endl;
    int n,i=0,sum=0;
    cout << "Enter last number of the sequence :";
    cin >>  n;
    while (i<=n){
        sum+=i;
        i+=5;
    }
    cout << "Sum :" << sum << endl;
}

int main() {
    setlocale(LC_ALL, "RUS");
    firstTask();
    secondTask();
    thirdTask();
    fourthTask();
    fifthTask();
    sixthTask();
    seventhTask();
    eighthTask();
    ninthTask();
    tenthTask();
    twelfthTask();
    thirteenthTask();
    fourteenthTask();
    fifteenthTask();
    seventeenthTask();
    eighteenthTask();
    nineteenthTask();
    twentiethTask();
    twentyfirstTask();
    twentysecondTask();
    twentythirdTask();
    twentyfourthTask();
    twentyfifthTask();
    twentysixthTask();
    twentyseventhTask();
    twentyeighthTask();
    twentyninthTask();
    thirtiethTask();
    thirtyfirstTask();
}
