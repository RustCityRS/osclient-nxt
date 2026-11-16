// libs/graphics/view/shaderfragments/ViewTransformsFragment.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.view

namespace jag {
    // 0x1009de3b0
    void hash_combine<float>(unsigned long& arg1, const float& arg2) {
        hash<float> local_18;

        long lVar2 = std::hash<float>::operator()(&local_18, arg2);
        unsigned long uVar1 = arg1;
        arg1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1009de490
    void hash_combine<unsigned long, unsigned long, unsigned long, unsigned long>(unsigned long& arg1,
                                                                                  const unsigned long& arg2,
                                                                                  const unsigned long& arg3,
                                                                                  const unsigned long& arg4,
                                                                                  const unsigned long& arg5) {
        hash_combine<unsigned long>(arg1, arg2);
        hash_combine<unsigned long, unsigned long, unsigned long>(arg1, arg3, arg4, arg5);
    }

    // 0x1009de4d0
    void hash_combine<unsigned long, unsigned long, unsigned long>(unsigned long& arg1, const unsigned long& arg2,
                                                                   const unsigned long& arg3,
                                                                   const unsigned long& arg4) {
        hash_combine<unsigned long>(arg1, arg2);
        hash_combine<unsigned long, unsigned long>(arg1, arg3, arg4);
    }

    // 0x1009de510
    void hash_combine<unsigned long, unsigned long>(unsigned long& arg1, const unsigned long& arg2,
                                                    const unsigned long& arg3) {
        hash_combine<unsigned long>(arg1, arg2);
        hash_combine<unsigned long>(arg1, arg3);
    }

} // namespace jag

namespace jag::graphics {
    class ViewTransformsFragment {
    public:
        ViewTransformsFragment* BuildUniforms();

        uint8_t _unknown_0[1];
    };

    // 0x1009dd7e0
    ViewTransformsFragment* ViewTransformsFragment::BuildUniforms() {
        char* in_RSI;

        basic_string<decltype(nullptr)>(in_RSI);
        return this;
    }

} // namespace jag::graphics

// 0x1009de220
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x1009de3a0
void tan(float arg1) {
    _tanf();
}
