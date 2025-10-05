# New Challenge Template

Use this file as a starting point when adding a new coding challenge to the repository. Copy the contents into a new file in this directory (for example: `problems/my_challenge.md`) and fill in the placeholders.

# <Challenge Title> — Short subtitle

## Problem
Brief description of the problem and expected behavior.

- Input: describe input types
- Output: describe expected output and return values
- Special cases: invalid input handling

## Function signature (C++)

int my_challenge(int param);

(Adjust signature to match required language / types.)

## Files

- Header: include/<your_challenge>.h
- Implementation: src/<your_challenge>.cpp
- Tests: tests/test_<your_challenge>.cpp
- (Optional) Benchmarks or examples: examples/<your_challenge>_example.cpp

## Examples

- `my_challenge( ... )` -> `...` — brief explanation
- Provide 3–5 representative examples including edge cases.

## Constraints and edge cases

- Input limits (e.g., value ranges, sizes)
- Behavior on invalid inputs
- Performance requirements (time / memory)

## Implementation checklist

- [ ] Add header to include/<your_challenge>.h with function declaration and brief doc comment.
- [ ] Implement function in src/<your_challenge>.cpp.
- [ ] Add unit tests to tests/test_<your_challenge>.cpp covering normal cases, edge cases, and invalid inputs.
- [ ] Add the new files to CMakeLists.txt or the build script if required.
- [ ] Run build_and_run.sh (or project's build) to verify compilation and tests.

## Testing tips

- Use the existing test framework in this repo as reference (see tests/test_sum_digits.cpp).
- Keep tests focused and deterministic.

## Notes for CMake (example)

If your project uses CMake, add the new source and test files to the appropriate lists in CMakeLists.txt. See existing entries for examples.

---

Replace placeholders (e.g., `<your_challenge>`) with actual names. Keep the problem file in the problems/ directory and update problems/CHALLENGES_OVERVIEW.md with a one-line entry when you add a new challenge.