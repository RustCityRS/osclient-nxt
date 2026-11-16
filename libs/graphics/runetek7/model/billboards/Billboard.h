// libs/graphics/runetek7/model/billboards/Billboard.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class Billboard {
    public:
        Billboard(int arg1, unsigned int arg2, unsigned int arg3, const math::Vector3T<float>& vector31,
                  const math::Vector3T<float>& vector32, const math::Vector3T<float>& vector33, int arg7, int arg8,
                  int arg9, unsigned int arg10, int arg11);

    private:
        int field_0;
        unsigned int field_4;
        unsigned int field_8;
        uint8_t _unknown_12[12];
        int field_24;
        unsigned int field_28;
        int field_32;
        int field_36;
        int field_40;
        unsigned int field_44;
        uint8_t _unknown_48[4];
        uint64_t field_52;
        uint64_t field_60;
    };

    // 0x100821ad0
    Billboard::Billboard(int arg1, unsigned int arg2, unsigned int arg3, const math::Vector3T<float>& vector31,
                         const math::Vector3T<float>& vector32, const math::Vector3T<float>& vector33, int arg7,
                         int arg8, int arg9, unsigned int arg10, int arg11)
        : MakeUniquePool<Billboard, 32>(), field_0(arg1), field_4(arg2), field_8(arg3) {
        uint8_t* this_00 = &field_12;
        new (this_00) math::Vector3T();
        field_24 = arg7;
        field_28 = arg10;
        field_32 = arg8;
        field_36 = arg9;
        field_40 = arg11;
        *(uint64_t*)&field_44 = 8589934591;
        field_52 = 1;
        field_60 = 0;
        *this_00 += vector31;
        *this_00 += vector32;
        *this_00 += vector33;
        *this_00 /= 3.0;
        field_44 = field_28;
    }

} // namespace jag::graphics
