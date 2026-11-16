// libs/game/runetek5/config/iftype/components/ObjTypeHelpers.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x10053a0c0
    Vector3T<int>* Vector3T<int>::operator[](unsigned int arg1) const {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

    // 0x10053a100
    Vector3T<short>* Vector3T<short>::operator[](unsigned int arg1) const {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, nullptr);
        }
        return this + (unsigned long)arg1 * 2;
    }

    // 0x10053a140
    Matrix44T<float>& Matrix44JagexPerspective<float>(Matrix44T<float>& matrix44, float arg2, float arg3, float arg4,
                                                      float arg5, float arg6, float arg7, float arg8, float arg9) {
        float fVar1 = 1.0 / arg8 + 1.0 / arg8;
        float fVar2 = 1.0 / arg9 + 1.0 / arg9;
        matrix44.Set(arg4 * fVar1, 0.0, 0.0, 0.0, 0.0, arg5 * fVar2, 0.0, 0.0, fVar1 * arg2 - 1.0, 1.0 - fVar2 * arg3,
                     (arg7 + arg6) / (arg7 - arg6), 1.0, 0.0, 0.0, ((arg7 + arg7) * arg6) / (arg6 - arg7), 0.0);
        return matrix44;
    }

} // namespace jag::math

namespace jag::game {
    class ObjSpriteBuilder {
    public:
        unsigned long GetObjSpriteCacheKey(int arg1, bool arg2, bool arg3, unsigned int arg4, unsigned int arg5);
        uint8_t* BuildObjectSprite(ui::SpriteData& spriteData, int arg2, unsigned long long arg3,
                                   graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                                   ConfigProvider* configProvider, const PlayerModel* playerModel, int arg8, int arg9,
                                   bool& arg10);
        void CreateObjectSpriteRT(graphics::RT7Core& rt7Core, int arg2, unsigned int arg3, unsigned int arg4);
        uint32_t RenderObjectSpriteModel(graphics::RT7Core& rt7Core, const ObjType* objType,
                                         const shared_ptr<graphics::Model>& model, int arg4, int arg5, int arg6,
                                         unsigned int arg7, unsigned int arg8, bool arg9,
                                         shared_ptr<render::RenderTargets>& renderTargets, bool arg11);
        void ClearCache();
        static math::ColourHSL m_ambientColour;  // = ColourHSL(1.0, 1.0, 1.0)
        static math::ColourHSL m_sunlightColour; // = ColourHSL(1.25, 1.25, 1.25)
        static float m_lightDirection[4];        // = { 0, 0, 0, 0 }
        static math::ColourHSL m_cameraOffset;   // = ColourHSL(-6.0, 0.0, 0.0)

        uint8_t _unknown_0[40];
    };

    // 0x10053a050
    void ObjSpriteBuilder::ClearCache() {
        Clear();
        field_32.Clear();
    }

} // namespace jag::game
