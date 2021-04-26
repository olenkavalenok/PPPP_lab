using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTestMyLab2
{
    TEST_CLASS(UnitTest)
    {
    public:
       

        TEST_METHOD(AnyY_4_Returned4X)
        {
            double x = 4;
            Assert::IsTrue(AnyY(x) == "3 4", L"Assert");
        }

        TEST_METHOD(AnyX_4_Returned4Y)
        {
            double y = 4;
            Assert::IsTrue(AnyX(y) == "4 4", L"Assert");
        }

        TEST_METHOD(EndlessAnswers_Returned123)
        {
           
            double firstArg = -2;
            double secondArg = 1;
            double thirdArg = 3;
            
            Assert::IsTrue(EndlessAnswers(firstArg, secondArg, thirdArg) == "1 2 3", L"Assert");
        }

      
        TEST_METHOD(Solve_allZero_Returned5)
        {
         
            double a = 0;
            double b = 0;
            double c = 0;
            double d = 0;
            double e = 0;
            double f = 0;
            std::string string = "";
            Assert::IsTrue(Solve(a, b, c, d, e, f, string) == "5", L"Assert");
        }

        TEST_METHOD(Solve_firstAnswer_Returned215)
        {
           
            double a = 4;
            double b = 1;
            double c = 4;
            double d = 5;
            double e = 9;
            double f = 29;
            std::string string = "";
           
            Assert::IsTrue(Solve(a, b, c, d, e, f, string) == "2 1 5", L"Assert");
        }

        TEST_METHOD(Solve_noAnswer_Returned0)
        {
           
            double a = 2;
            double b = 2;
            double c = 2;
            double d = 2;
            double e = 2;
            double f = 9;
            
            std::string string = "";
            Assert::IsTrue(Solve(a, b, c, d, e, f, string) == "0", L"Assert");
        }
        TEST_METHOD(Solve_kidding_Returned5)
        {
         
            double a = 2;
            double b = 2;
            double c = 1;
            double d = 4;
            double e = 0;
            double f = 0;
            
            std::string string = "";
            Assert::IsTrue(Solve(a, b, c, d, e, f, string) == "Are you fix me?", L"Assert");
        }

        TEST_METHOD(Solve_lotsAnswer_Returned1)
        {
           
            double a = 5;
            double b = 5;
            double c = 25;
            double d = 25;
            double e = 0;
            double f = 0;
            
            std::string string = "";
            Assert::IsTrue(Solve(a, b, c, d, e, f, string) == "1 -1 0", L"Assert");
        }
    };
}
