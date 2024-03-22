#include <algorithm>
#include <vector>

void f1(std::vector<int> &v) {

  {
    auto i = v.begin();
    ++i;        // NON_COMPLIANT
    i = i++;    // NON_COMPLIANT
    i = i + 10; // NON_COMPLIANT
  }

  {
    auto i = v.begin();
    if (v.size() > 10) {
      ++i;        // COMPLIANT
      i = i++;    // COMPLIANT
      i = i + 10; // COMPLIANT
    }
  }
  for (auto i = v.begin(),
            l = (i + std::min(static_cast<std::vector<int>::size_type>(10),
                              v.size()));
       i != l; ++i) { // COMPLIANT
  }

  for (auto i = v.begin();; ++i) { // NON_COMPLIANT
  }
}

void test_fp_reported_in_374(std::vector<int> &v) {
  {
    auto end = v.end();
    for (auto i = v.begin(); i != end; ++i) { // COMPLIANT
    }
  }

  {
    auto end2 = v.end();
    end2++;                                    // NON_COMPLIANT[FALSE_NEGATIVE]
    for (auto i = v.begin(); i != end2; ++i) { // NON_COMPLIANT[FALSE_NEGATIVE]
    }
  }
}