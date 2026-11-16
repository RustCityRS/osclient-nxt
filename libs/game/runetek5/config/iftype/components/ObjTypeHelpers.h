// libs/game/runetek5/config/iftype/components/ObjTypeHelpers.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x10053a0c0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<int>::operator[](unsigned int) const
    Vector3T<int>* Vector3T<int>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

    // 0x10053a100, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<short>::operator[](unsigned int) const
    Vector3T<short>* Vector3T<short>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, (char*)0);
        }
        return this + (ulong)param_1 * 2;
    }

    // 0x10053a140, 224 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& Matrix44JagexPerspective<float>(Matrix44T<float>&, float, float, float, float, float, float, float, float)
    Matrix44T* Matrix44JagexPerspective<float>(Matrix44T* param_1, float param_2, float param_3, float param_4,
                                               float param_5, float param_6, float param_7, float param_8,
                                               float param_9) {
        float fVar1;
        float fVar2;

        fVar1 = 1.0 / param_8 + 1.0 / param_8;
        fVar2 = 1.0 / param_9 + 1.0 / param_9;
        param_1->Set(param_4 * fVar1, 0.0, 0.0, 0.0, 0.0, param_5 * fVar2, 0.0, 0.0, fVar1 * param_2 + -1.0,
                     1.0 - fVar2 * param_3, (param_7 + param_6) / (param_7 - param_6), 1.0, 0.0, 0.0,
                     ((param_7 + param_7) * param_6) / (param_6 - param_7), 0.0);
        return param_1;
    }

} // namespace jag::math

namespace jag::game {
    class ObjSpriteBuilder {
    public:
        ulong GetObjSpriteCacheKey(int, bool, bool, unsigned int, unsigned int);
        BuildObjectSprite(ui::SpriteData&, int, unsigned long long, graphics::RT7Core&, AssetBuilder&, ConfigProvider*,
                          PlayerModel const*, int, int, bool&);
        void CreateObjectSpriteRT(graphics::RT7Core&, int, unsigned int, unsigned int);
        RenderObjectSpriteModel(graphics::RT7Core&, ObjType const*, shared_ptr<graphics::Model> const&, int, int, int,
                                unsigned int, unsigned int, bool, shared_ptr<render::RenderTargets>&, bool);
        void ClearCache();
        static math::ColourHSL /* 16 bytes */ m_ambientColour;  // = ColourHSL(1.0, 1.0, 1.0)
        static math::ColourHSL /* 16 bytes */ m_sunlightColour; // = ColourHSL(1.25, 1.25, 1.25)
        static /* 16 bytes */ m_lightDirection;                 // = { 0, 0, 0, 0 }
        static math::ColourHSL /* 16 bytes */ m_cameraOffset;   // = ColourHSL(-6.0, 0.0, 0.0)

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    // 0x10053a050, 48 bytes, inline, placed by debug map only (low confidence)
    // ObjSpriteBuilder::ClearCache()
    void ObjSpriteBuilder::ClearCache() {
        Clear();
        (&field_32)->Clear();
    }

} // namespace jag::game

namespace jag::graphics {
    // 0x10053a080, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // SunlightEffectSaveRestore::~SunlightEffectSaveRestore(): jumps straight to the base-object destructor

} // namespace jag::graphics
