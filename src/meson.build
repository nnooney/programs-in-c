root_include = include_directories('.')

test_args = ['alsologtostderr']

# External Dependencies

# GoogleTest
gtest_proj = subproject('gtest-git')
gtest_dep = gtest_proj.get_variable('gtest_dep')
gtest_main_dep = gtest_proj.get_variable('gtest_main_dep')
gmock_dep = gtest_proj.get_variable('gmock_dep')
gmock_main_dep = gtest_proj.get_variable('gmock_main_dep')


subdir('experimental')
subdir('expert_c_programming')
