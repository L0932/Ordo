cmake_minimum_required(VERSION 3.20)

project(Ordo
	VERSION 0.1.0
	LANGUAGES CXX
)

add_library(OrdoCore STATIC
    src/CharacterState.cpp
    src/Core.cpp
    src/Disposition.cpp
)

add_library(Ordo::Core ALIAS OrdoCore)

target_compile_features(OrdoCore PUBLIC cxx_std_20)

set_target_properties(OrdoCore PROPERTIES
    CXX_EXTENSIONS OFF
)

target_include_directories(OrdoCore PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

add_executable(OrdoSandbox
    sandbox/Main.cpp
)

target_link_libraries(OrdoSandbox PRIVATE Ordo::Core)

include(CTest)

if(BUILD_TESTING)
    add_executable(OrdoCoreSmokeTests
        tests/CoreSmoke.cpp
    )

    target_link_libraries(OrdoCoreSmokeTests PRIVATE Ordo::Core)

    add_test(
        NAME Core.Smoke
        COMMAND OrdoCoreSmokeTests
    )

    add_executable(OrdoCharacterStateTests
        tests/CharacterStateTests.cpp
    )
    target_link_libraries(OrdoCharacterStateTests PRIVATE Ordo::Core)
    add_test(NAME Core.CharacterState COMMAND OrdoCharacterStateTests)
endif()