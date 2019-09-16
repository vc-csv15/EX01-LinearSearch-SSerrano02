//
// Created by vscilab on 9/9/2019.
//

#ifndef EX01_LINEARSEARCH_SSERRANO02_LINEARSEARCH_H
#define EX01_LINEARSEARCH_SSERRANO02_LINEARSEARCH_H

#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

                template <class T>
                int64_t find(const T& value, T array[], size_t size) {
                    int64_t index_result = -1;
                    if (array != nullptr) {
                        for (size_t i = 0; i < size; i++) {
                            if (array[i] == value) {
                                index_result = i;
                                break;                  // returns the first instance of value
                            }
                        }
                    }
                    return index_result;
                }

            }}}}
#endif //EX01_LINEARSEARCH_SSERRANO02_LINEARSEARCH_H
