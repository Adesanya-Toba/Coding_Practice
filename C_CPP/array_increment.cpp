/**
 * @file array_increment.cpp
 * @author Toba Adesanya
 * @brief 
 * @version 0.1
 * @date 2022-07-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int array[40];
  int data_buffer[100];
  int idx = 0;

  printf("index++ = %d\n", idx++);
  printf("++index = %d\n", ++idx);
  printf("index = %d\n", idx);

  int data_idx = 0;
  for (; data_idx < 5; data_idx++)
  {
    array[data_idx]; // = data_buffer[data_idx + 1]; // Oil pressure, Coolant tmep, Oil temp, Fuel level
  }
  printf("data index = %d\n\n", data_idx);

  data_idx = 0; int buffer_idx = 0;
  for (; data_idx < 9;)
  {
      cout << "last data index = " << data_idx << "\n";
      cout << "last buffer index = " << data_idx * 2 << "\n";
      array[data_idx++]; // = (data_buffer[buffer_idx] << 16 | data_buffer[buffer_idx + 1]);
      // buffer_idx = data_idx * 2;
  }
  cout << "next array index = " << data_idx << "\n";
  cout << "next buffer index = " << buffer_idx << "\n";

  for (; data_idx < 13;) // 9
  {
      cout << "last data index = " << data_idx << "\n";
      cout << "last buffer index = " << buffer_idx << "\n";
      array[data_idx++]; buffer_idx++; // = data_buffer[data_idx * 2];
  }
  cout << "next array index = " << data_idx << "\n";
  cout << "next buffer index = " << buffer_idx << "\n";

  int offset; data_idx = 9;
  for ( offset = 1; data_idx < 19; offset++) // data_idx starts at 9
  {
    array[data_idx++] = (data_buffer[data_idx + offset] << 16 | data_buffer[data_idx + offset + 1]) * 0.1;
  }
  cout << "offset is = " << offset << "\n";
  cout << "next data index = " << data_idx << "\n";

  int alarm_code = 1;
  // Alarms; Cycle through the 6 alarm registers and apply bitwise ops to get actual alarms
  for (uint8_t alarm_reg = 0; alarm_reg < 6; alarm_reg++)
  {
    for (uint8_t bit_shift_offset = 0; bit_shift_offset < 4; bit_shift_offset++)
    {
      // uint8_t alarm_cond = (alarm_buffer[alarm_reg] << (4 * bit_shift_offset)) & DSE_ALARM_BIT_MASK;

      // Check if alarm is active
      if (false)
      {
        cout << "Alarm code: " << alarm_code << "\n"; // Alarm code
        // main_gen_data[data_idx++] = alarm_cond; // Alarm status
      }
      cout << "Alarm code: " << alarm_code << "\n";
      alarm_code++;
    }
  }

  return 0;
}
