// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleOverdrawFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "libs/graphics/postprocess/filters/DepthDownSamplerFilter.h"

namespace jag::graphics {
    class ParticleOverdrawFS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleOverdrawFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ParticleOverdrawFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ParticleOverdrawFS::~ParticleOverdrawFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ParticleOverdrawFS::~ParticleOverdrawFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100898480
    ParticleOverdrawFS::ParticleOverdrawFS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x1008984e0
    auto ParticleOverdrawFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_148[280];
        ViewTransformsFragment local_30;

        new (local_148) RT7PixelShaderSourceStream(*this, effectList, 1, 1, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16);
        std::operator<<(basic_ostream, "in highp vec4 vWorldPosition;\n");
        local_30.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        auto str = shadersourceprovider::GetShaderString(49);
        std::operator<<(basic_ostream, str);
        auto result = local_148->str();
        return result;
    }

    // 0x100898d20: RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream() has the same machine code as RT7VertexShaderSourceStream::~RT7VertexShaderSourceStream()

} // namespace jag::graphics

namespace jag {
    // 0x10089c0b0
    graphics::Shader* placement_new<graphics::Shader, graphics::ShaderType&,
                                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                                    unsigned long&, graphics::EffectList const&, render::VertexDeclaration const&,
                                    graphics::EffectManager const&, unsigned char&, graphics::RenderPassType&>(
        void* arg1, graphics::ShaderType& shaderType,
        const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str1,
        const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str2, unsigned long& arg5,
        const graphics::EffectList& effectList, const render::VertexDeclaration& vertexDeclaration,
        const graphics::EffectManager& effectManager, unsigned char& arg9, graphics::RenderPassType& renderPassType) {
        new (arg1) graphics::Shader(shaderType, str1, str2, arg5, effectList, vertexDeclaration, effectManager, arg9,
                                    renderPassType);
        return arg1;
    }

    // 0x10089c0f0
    ref_counter_shared<graphics::Shader>*
    placement_new<ref_counter_shared<graphics::Shader>, int, graphics::Shader*&>(void* arg1, int&& arg2,
                                                                                 graphics::Shader*& arg3) {
        new (arg1) ref_counter_shared<graphics::Shader>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10089dd10
    bool operator<< graphics::Shader,
        graphics::Shader > (const shared_ptr<graphics::Shader>& shader1, const shared_ptr<graphics::Shader>& shader2) {
        Shader** arg2;

        uint64_t local_20 = shader1.end();
        auto local_18 = shader2.end();
        return (bool)std::less<graphics::Shader*>::operator()((less<graphics::Shader*>*)&local_20, &local_18, arg2);
    }

    // 0x10089e020
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>&
    operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, unsigned short>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise, const unsigned short& arg2) {
        dataSerialise.WriteObj<unsigned short>(arg2);
        return dataSerialise;
    }

    // 0x10089e040
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>&
    operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, unsigned int>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise, const unsigned int& arg2) {
        dataSerialise.WriteObj<unsigned int>(arg2);
        return dataSerialise;
    }

} // namespace jag

// 0x100898c30
void __libcpp_strstr(const char* str1, const char* str2) {
    _strstr(str1, "aDummy");
}
