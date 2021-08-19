hello_lib_deps = [
]
hello_lib = library(
  'hello',
  files(
    'hello.c',
  ),
  dependencies: hello_lib_deps,
  include_directories: root_include,
)
hello_dep = declare_dependency(
  dependencies: hello_lib_deps,
  include_directories: root_include,
  link_with: hello_lib,
)
hello_test = executable(
  'hello_test',
  files(
    'hello_test.cpp',
  ),
  dependencies: [
    hello_dep,
    gtest_main_dep,
  ]
)
test(
  'hello_test',
  hello_test,
  protocol: 'gtest',
  args: test_args,
)
