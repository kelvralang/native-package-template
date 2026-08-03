#include "NativePackageAPI.hpp"

#include <cstddef>

namespace {

bool greeting(const ExprHostApi *, const ExprPackageValue *args, size_t argc,
              ExprPackageValue *result, ExprPackageStringView *error) {
  if (argc != 0 || result == nullptr || args != nullptr) {
    if (error != nullptr) {
      static constexpr char message[] = "greeting expects no arguments";
      *error = {message, sizeof(message) - 1};
    }
    return false;
  }
  static constexpr char message[] = "Mog native package template";
  result->kind = EXPR_PACKAGE_VALUE_STR;
  result->as.string_value = {message, sizeof(message) - 1};
  return true;
}

constexpr ExprPackageFunctionExport functions[] = {
    {"greeting", "fn() -> str", 0, greeting},
};

constexpr ExprPackageRegistration registration = {
    EXPR_NATIVE_PACKAGE_ABI_VERSION,
    "github",
    "native-package-template",
    functions,
    sizeof(functions) / sizeof(functions[0]),
    nullptr,
    0,
};

} // namespace

extern "C" const ExprPackageRegistration *exprRegisterPackage(void) {
  return &registration;
}
