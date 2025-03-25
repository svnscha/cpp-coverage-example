# 🧪 C++ Code Coverage Example (GTest + lcov)

This repository demonstrates how to:

- Build a C++ project with [CMake](https://cmake.org/) and GoogleTest
- Generate code coverage reports using `lcov` and `genhtml`
- Automate everything via [GitHub Actions](.github/workflows/coverage.yml)

## 📦 What’s Inside

- ✅ Unit tests with GoogleTest
- ✅ Coverage tracking via `--coverage` flags
- ✅ HTML report generation with `genhtml`
- ✅ GitHub Actions workflow that:
  - Builds and tests your code
  - Captures and summarizes coverage
  - Uploads an artifact with the HTML report
  - Enforces a minimum coverage threshold (default: 80%)

## 🚀 Demo

- Check the [open PRs](https://github.com/svnscha/cpp-coverage-example/pulls) for this repository to see how it works in practice!
