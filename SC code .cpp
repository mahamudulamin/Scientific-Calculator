#include<iostream>
#include<math.h>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int main(){
    cout<<"\n\t-------------------------------"<<endl;
    cout<<"\t           CALCULATOR            "<<endl;
    cout<<"\t-------------------------------"<<endl;

    cout<<"\t 1: Addition\t\t"<<" 9: Sine"<<endl;
    cout<<"\t 2: Subtraction\t\t"<<"10: Cosine"<<endl;
    cout<<"\t 3: Multiplication\t"<<"11: Tangent"<<endl;
    cout<<"\t 4: Division\t\t"<<"12: Inverse of Sine"<<endl;
    cout<<"\t 5: Exponentiation\t"<<"13: Inverse of Cosine"<<endl;
    cout<<"\t 6: Logarithm\t\t"<<"14: Inverse of Tangent"<<endl;
    cout<<"\t 7: Square\t\t"<<"15: Factorial"<<endl;
    cout<<"\t 8: Square Root\t\t"<<"16: Exist"<<endl;

    cout<<"\n\t Special Modes:"<<endl;
    cout<<" \t --------------"<<endl;
    cout<<"\t 17: Calculate an Expression"<<endl;
    cout<<"\t 18. Matrix Operations"<<endl;
    cout<<"\t 19. Vector Operations"<<endl;

     float x,y;
    float PI= 3.14159265;
    int choice;

    do{
        cout<<"\n\t **Press the keynumber to select your operation**\n\t";
        cin>>choice;

        if(choice==17){
            string infixExpr;
                cout<<"\tEnter a one-digit infix expression: ";
                cin>>infixExpr;

                string postfixExpr= infixToPostfix(infixExpr);
                int result = evaluatePostfix(postfixExpr);
                cout<<"\tResult: "<<result<<endl;
                break;
        }
        switch(choice){

        default: cout<<"\tWrong Input"<<endl;
                break;

        case 18: matrix();
                    break;
        case 19:Vector();
                    break;

        case 16: cout<<"\tExited"<<endl;
                break;
            
         case 1: cout<<"\tEnter 1st Operand\n\t";
                cin>>x;
                cout<<"\tEnter 2nd Operand\n\t";
                cin>>y;
                cout<<"\tResult = "<<x+y<<endl;
                break;

        case 2: cout<<"\tEnter 1st Operand\n\t";
                cin>>x;
                cout<<"\tEnter 2st Operand\n\t";
                cin>>y;
                cout<<"\tResult = "<<x-y<<endl;
                break;

        case 3: cout<<"\tEnter 1st Operand\n\t";
                cin>>x;
                cout<<"\tEnter 2nd Operand\n\t";
                cin>>y;
                cout<<"\tResult = "<<x*y<<endl;
                break;

        case 4: cout<<"\tEnter 1st Operand\n\t";
                cin>>x;
                cout<<"\tEnter 2nd Operand\n\t";
                cin>>y;
                cout<<"\tResult = "<<x/y<<endl;
                break;

        case 5: cout<<"\tEnter Base \n\t";
                cin>>x;
                cout<<"\tEnter Exponent\n\t";
                cin>>y;
                cout<<"\tResult = "<<pow(x,y)<<endl;
                break;

        case 6: cout<<"\tEnter Number\n\t";
                cin>>x;
                cout<<"\tResult = "<<log10(x)<<endl;
                break;

        case 7: cout<<"\tEnter Number\n\t";
                cin>>x;
                cout<<"\tResult = "<<x*x<<endl;
                break;

        case 8: cout<<"\tEnter Number\n\t";
                cin>>x;
                cout<<"\tResult = "<<sqrt(x)<<endl;
                break;
            
        case 9: cout<<"\tEnter Degree angle\n\t";
                cin>>x;
                cout<<"\tResult = "<<sin(x*(PI/180.0))<<endl;
                break;

        case 10: cout<<"\tEnter Degree Angle\n\t";
                cin>>x;
                cout<<"\tResult = "<<cos(x*(PI/180.0))<<endl;
                break;

        case 11: cout<<"\tEnter Degree Angle\n\t";
                cin>>x;
                cout<<"\tResult = "<<tan(x*(PI/180.0))<<endl;
                break;

        case 12: cout<<"\tEnter Value\n\t";
                cin>>x;
                cout<<"\tResult = "<<asin(x)*180.0/PI<<endl;
                break;

        case 13: cout<<"\tEnter Value\n\t";
                cin>>x;
                cout<<"\tResult = "<<acos(x)*180.0/PI<<endl;
                break;

        case 14: cout<<"\tEnter Value\n\t";
                cin>>x;
                cout<<"\tResult = "<<atan(x)*180.0/PI<<endl;
                break;

        case 15: cout<<"\tEnter Number\n\t";
                signed long long p,sum=1;
                cin>>p;
                for(int i=1; i<=p; i++){
                    sum=i*sum;
                }
                cout<<"\tResult = "<<sum<<endl;
                break;
return 0;
}
