#pragma once
#include <iostream>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

namespace CostumCorreuExisteix
{
    // Define a custom exception class by inheriting from System.Exception
    public ref class CorreuExisteix : Exception
    {
        // Constructor that takes a custom error message
    public: CorreuExisteix(String^ message) : Exception(message)
    {
        // You can add any additional logic here if needed
    }

          // Optional: If you want to provide additional information, you can define additional constructors or properties.
    };
}