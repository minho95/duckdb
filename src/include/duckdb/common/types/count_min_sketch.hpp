//===----------------------------------------------------------------------===//
//                         DuckDB
//
// duckdb/common/types/count_min_sketch.hpp
//
//
//===----------------------------------------------------------------------===//

#include "duckdb/common/vector.hpp"

namespace duckdb {
  class CountMinSketch {
    public:
      CountMinSketch();
      ~CountMinSketch();

      void Add(data_ptr_t element);

    private:
      vector<std::vector<int>> counters;  
  };
}