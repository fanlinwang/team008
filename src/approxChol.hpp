#pragma once

#include "approxCholTypes.h"

void forward(const LDLinv& ldli, std::vector<Tval>& y);
void backward(const LDLinv& ldli, std::vector<Tval>& y); 
Tval mean(const std::vector<Tval>& y);
std::vector<Tval> LDLsolver(const LDLinv& ldli, const std::vector<Tval>& b);
