#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <bitset>
using namespace sol940;
using namespace std;

/*takeaways
  - brute force
*/
bool Solution::find(string S, int N)
{

  for (auto i = 1; i <= N; i++)
  {
    /* convert to binary representation */
    auto b = bitset<32>(i).to_string();

    /* remove leading zeros from b before searching
       it against S
    */
    if (S.find(b.substr(b.find("1"))) == string::npos)
      return false;
  }

  return true;
}