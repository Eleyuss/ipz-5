#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\bodya.pc\source\repos\ipz 3\ipz 3\ipz 3.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{
	TEST_CLASS(calculate_tests)
	{
	public:

		TEST_METHOD(calculatee_getx_15_getn_2_return14)
		{
			int x = 15;
			double expected = 14;
			int n = 2;

			double actual = calculatey(x, 0, 0, n, 0);

			Assert::AreEqual(expected, actual);
		}

	public: 

		TEST_METHOD(calculatee_getx_minus8_getn_4_return_3_85)
		{
			int x = -8;
			double expected = 3.85;
			int n = 4;

			double actual = calculatey(x, 0, 0, n, 0);

			Assert::AreEqual(expected, actual);
		}

	public:

		TEST_METHOD(calculatee_wrong)
		{
			int x = -5;
			double expected = 0.9434917123;
			int n = 2;

			double actual = calculatey(x, 0, 0, n, 0);

			Assert::AreEqual(expected, actual);
		}
	};


	TEST_CLASS(checkvalidation)
	{
	public:

		TEST_METHOD(n_validation_exception_not_thrown)
		{
			int n = 2;

			try 
			{
				checkN(n);
				Assert::IsTrue(true);

			}

			catch(...)
			{
				Assert::Fail();
			}

		}


	public:

		TEST_METHOD(n_validation_exception_thrown)
		{
			int n = 1;

			try
			{
				checkN(n);
				Assert::Fail();

			}

			catch (...)
			{
				Assert::IsTrue(true);
			}

		}

	public:

		TEST_METHOD(h_validation_exception_not_thrown)
		{
			int h = 2;

			try
			{
				checkH(h);
				Assert::IsTrue(true);

			}

			catch (...)
			{
				Assert::Fail();
			}

		}


	public:

		TEST_METHOD(h_validation_exception_thrown)
		{
			int h = 0;

			try
			{
				checkH(h);
				Assert::Fail();

			}

			catch (...)
			{
				Assert::IsTrue(true);
			}

		}

	public:

		TEST_METHOD(ab_validation_exception_not_thrown)
		{
			int a = 5;
			int b = 10;

			try
			{
				checkAB(a,b);
				Assert::IsTrue(true);

			}

			catch (...)
			{
				Assert::Fail();
			}

		}


	public:

		TEST_METHOD(ab_validation_exception_thrown)
		{
			int a = 9;
			int b = 2;

			try
			{
				checkAB(a, b);
				Assert::Fail();

			}

			catch (...)
			{
				Assert::IsTrue(true);
			}

		}

	};

}
