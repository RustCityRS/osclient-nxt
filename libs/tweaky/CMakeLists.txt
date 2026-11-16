add_library(libs.tweaky STATIC
    ${ROOT}/_unplaced/libs/tweaky/unity_0.cpp
    Tweaky.cpp
    TweakyEditLine.cpp
    Tweaky_Button.cpp
    Tweaky_CheckBox.cpp
    Tweaky_Container.cpp
    Tweaky_ContainerGroup.cpp
    Tweaky_DropdownGroup.cpp
    Tweaky_EditField.cpp
    Tweaky_Enum.cpp
    Tweaky_GradientSlider.cpp
    Tweaky_List.cpp
    Tweaky_RadioButton.cpp
    Tweaky_RadioGroup.cpp
    Tweaky_Settings.cpp
    Tweaky_SizeControls.cpp
    Tweaky_Slider.cpp
    Tweaky_TabGroup.cpp
    Tweaky_Tickable.cpp
)
set_target_properties(libs.tweaky PROPERTIES UNITY_BUILD ON)
