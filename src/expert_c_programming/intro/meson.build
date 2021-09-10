max_time_lib_deps = [

]
max_time_lib = library(
  'max_time',
  files(
    'max_time.c',
  ),
  dependencies: max_time_lib_deps,
  include_directories: root_include,
)
max_time_dep = declare_dependency(
  dependencies: max_time_lib_deps,
  include_directories: root_include,
  link_with: max_time_lib,
)
max_time_test = executable(
  'max_time_test',
  files(
    'max_time_test.cpp',
  ),
  dependencies: [
    max_time_dep,
    gtest_main_dep,
  ]
)
test(
  'max_time_test',
  max_time_test,
  protocol: 'gtest',
  args: test_args,
)
