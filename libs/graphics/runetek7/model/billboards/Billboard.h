// libs/graphics/runetek7/model/billboards/Billboard.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class Billboard {
    public:
        Billboard(int, unsigned int, unsigned int, math::Vector3T<float> const&, math::Vector3T<float> const&,
                  math::Vector3T<float> const&, int, int, int, unsigned int, int);

        // data members, from how the methods use this: 68 bytes
        int field_0;  // offset 0
        uint field_4; // offset 4
        uint field_8; // offset 8
        char _unknown_12[12];
        int field_24;  // offset 24
        uint field_28; // offset 28
        int field_32;  // offset 32
        int field_36;  // offset 36
        int field_40;  // offset 40
        uint field_44; // offset 44
        char _unknown_48[4];
        undefined8 field_52; // offset 52
        undefined8 field_60; // offset 60
    };

    // 0x100821ad0, 192 bytes, base-object constructor, placed by class name
    // Billboard::Billboard(int, unsigned int, unsigned int, math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, int, int, int, unsigned int, int)
    void Billboard::Billboard(int param_1, uint param_2, uint param_3, Vector3T* param_4, Vector3T* param_5,
                              Vector3T* param_6, int param_7, int param_8, int param_9, uint param_10, int param_11) {
        undefined1* this_00;

        new (this) MakeUniquePool<Billboard, 32>();
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        this_00 = &field_12;
        new (this_00) math::Vector3T<int>();
        field_24 = param_7;
        field_28 = param_10;
        field_32 = param_8;
        field_36 = param_9;
        field_40 = param_11;
        *(undefined8*)&field_44 = 8589934591;
        field_52 = 1;
        field_60 = 0;
        math::Vector3T<float>::operator+=((Vector3T<float>*)this_00, param_4);
        math::Vector3T<float>::operator+=((Vector3T<float>*)this_00, param_5);
        math::Vector3T<float>::operator+=((Vector3T<float>*)this_00, param_6);
        math::Vector3T<float>::operator/=((Vector3T<float>*)this_00, 3.0);
        field_44 = field_28;
    }

    // 0x100821bf0, 64 bytes, complete-object constructor, placed by class name
    // Billboard::Billboard(int, unsigned int, unsigned int, math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, int, int, int, unsigned int, int)
    void Billboard::Billboard(int param_1, uint param_2, uint param_3, Vector3T* param_4, Vector3T* param_5,
                              Vector3T* param_6, int param_7, int param_8, int param_9, uint param_10, int param_11) {
        Billboard(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                  param_11);
    }

} // namespace jag::graphics
