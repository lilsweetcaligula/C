#ifndef RANDOM_UTILITIES_H
#define RANDOM_UTILITIES_H

#include <stdbool.h>
#include <stddef.h>

bool RandomBernoulli(struct RandomGenerator *generator);

void RandomShuffle(struct RandomGenerator *generator, void *items, size_t itemCount, size_t itemSize);

void *RandomChoice(struct RandomGenerator *generator, const void *items, size_t itemCount, size_t itemSize);

void RandomGenerateString(struct RandomGenerator *generator, char *buffer, size_t stringLength, const char *charsSelection);

int RandomGetInt(struct RandomGenerator *generator, int minValue, int maxValue);

#endif /* RANDOM_UTILITIES_H */
