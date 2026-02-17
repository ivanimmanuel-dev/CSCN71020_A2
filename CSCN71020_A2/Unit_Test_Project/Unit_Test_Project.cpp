#include "pch.h"
#include "CppUnitTest.h"
#include "main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject
{
	TEST_CLASS(UnitTestProject)
	{
	public:
		
		TEST_METHOD(GetPerimeter_ValidDimensions_ReturnsCorrectPerimeter)
		{
				int length = 5;												// Arrange: Valid length for the rectangle 
				int width = 2;												// Arrange: Valid width for the rectangle
				int result = getPerimeter(&length, &width);					// Act: Call the function to get the perimeter of the rectangle
				Assert::AreEqual(14, result);								// Assert: Verify that the result is correct (Perimeter = 2 * (length + width))
		}
		TEST_METHOD(GetArea_ValidDimensions_ReturnsCorrectArea)
		{
				int length = 5;												// Arrange: Valid length for the rectangle 
				int width = 2;												// Arrange: Valid width for the rectangle
				int result = getArea(&length, &width);						// Act: Call the function to get the area of the rectangle
				Assert::AreEqual(10, result);								// Assert: Verify that the result is correct (Area = length * width)
		}
	};

}
