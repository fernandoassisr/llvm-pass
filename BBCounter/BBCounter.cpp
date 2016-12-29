//===-- BBCouter.cpp - Count the basics blocks on the  ------===//
//
// This pass counts the number of basic blocks per loop in a program. It is an
// example about how to use the LoopInfo pass to obtain information about
// loops. It only goes over the outermost loops. The next example, e.g.,
// Count_Blocks_in_Loops2 fixes this problem.
//
// Author: Fernando.
// Date: July 20th, 2014.
// Usage: opt -load /Users/fernando/Programs/llvm/Debug+Asserts/lib/dcc888.dylib -bbloop -disable-output ex0.rbc 
//
//===----------------------------------------------------------------------===//


#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Function.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"
using namespace llvm;