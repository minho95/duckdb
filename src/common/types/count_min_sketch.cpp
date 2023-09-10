#include "duckdb/common/types/count_min_sketch.hpp"


namespace duckdb {
  
  CountMinSketch() {
    int n = 5;
    counters = vector<vector<int>> (n, vector<int>(n, 0));
  }

  void Add(data_ptr_t element) {
    
  }

}