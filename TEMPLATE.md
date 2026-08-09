# Customization checklist

1. Replace the module identity, import name, manifest name, and repository URL.
2. Replace `package.api.mog`, `src/package.cpp`, and `tests/main.mog`.
3. Keep `NativePackageAPI.hpp` byte-for-byte synchronized with the Mog runtime.
4. Update CMake dependencies and the supported-target list.
5. Add third-party sources under `vendor/` when offline source builds require them.
6. Update the README, changelog, license, and workflow caller inputs.
7. Run `tests/test_native_package.sh` before publishing a tag.
