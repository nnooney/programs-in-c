project('programs-in-c', 'c',
  default_options: [
    'c_std=c2x',
    'warning_level=3'
  ],
  license: 'Apache-2.0',
  version: '0.0.1',
)

# Compiler Options
c_comp = meson.get_compiler('c')
c_flags = [
]
flags = c_comp.get_supported_arguments(c_flags)
add_project_arguments(flags, language: 'c')

subdir('src')
