#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol940;

/*
Input: S = "0110", N = 3
Output: true
*/

tuple<string, int, bool> testFixture1()
{
  return make_tuple("0110", 3, true);
}

/*
Input: S = "0110", N = 4
Output: false
*/

tuple<string, int, bool> testFixture2()
{
  return make_tuple("0110", 4, false);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;

  cout << "Expect to see " << get<2>(f) << endl;
  cout << sol.find(get<0>(f), get<1>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  Solution sol;

  cout << "Expect to see " << get<2>(f) << endl;
  cout << sol.find(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}