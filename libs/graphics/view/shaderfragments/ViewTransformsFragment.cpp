// libs/graphics/view/shaderfragments/ViewTransformsFragment.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.view

namespace jag {
    // 0x1009de3b0, 80 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<float>(unsigned long&, float const&)
    void hash_combine<float>(ulong* param_1, float* param_2) {
        ulong uVar1;
        long lVar2;
        hash<float> local_18[8];

        lVar2 = std::hash<float>::operator()(local_18, *param_2);
        uVar1 = *param_1;
        *param_1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1009de490, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<unsigned long, unsigned long, unsigned long, unsigned long>(unsigned long&, unsigned long const&, unsigned long const&, unsigned long const&, unsigned long const&)
    void hash_combine<unsigned long, unsigned long, unsigned long, unsigned long>(ulong* param_1, ulong* param_2,
                                                                                  ulong* param_3, ulong* param_4,
                                                                                  ulong* param_5) {
        hash_combine<unsigned long>(param_1, param_2);
        hash_combine<unsigned long, unsigned long, unsigned long>(param_1, param_3, param_4, param_5);
    }

    // 0x1009de4d0, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<unsigned long, unsigned long, unsigned long>(unsigned long&, unsigned long const&, unsigned long const&, unsigned long const&)
    void hash_combine<unsigned long, unsigned long, unsigned long>(ulong* param_1, ulong* param_2, ulong* param_3,
                                                                   ulong* param_4) {
        hash_combine<unsigned long>(param_1, param_2);
        hash_combine<unsigned long, unsigned long>(param_1, param_3, param_4);
    }

    // 0x1009de510, 48 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<unsigned long, unsigned long>(unsigned long&, unsigned long const&, unsigned long const&)
    void hash_combine<unsigned long, unsigned long>(ulong* param_1, ulong* param_2, ulong* param_3) {
        hash_combine<unsigned long>(param_1, param_2);
        hash_combine<unsigned long>(param_1, param_3);
    }

} // namespace jag

namespace jag::graphics {
    class ViewTransformsFragment {
    public:
        BuildUniforms();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009dd7e0, 32 bytes, placed by class name and debug map
    // ViewTransformsFragment::BuildUniforms()
    ViewTransformsFragment* ViewTransformsFragment::BuildUniforms() {
        char* in_RSI;

        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this, in_RSI);
        return this;
    }

} // namespace jag::graphics

// 0x1009de220, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x1009de3a0, 16 bytes, placed by debug map only (low confidence)
// tan(float)
void tan(float param_1) {
    _tanf();
}
