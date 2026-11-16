// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleOverdrawFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "libs/graphics/postprocess/filters/DepthDownSamplerFilter.h"

namespace jag::graphics {
    class ParticleOverdrawFS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleOverdrawFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ParticleOverdrawFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleOverdrawFS::~ParticleOverdrawFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ParticleOverdrawFS::~ParticleOverdrawFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleOverdrawFS::~ParticleOverdrawFS();

    // 0x100898480, 80 bytes, base-object constructor, placed by class name and debug map
    // ParticleOverdrawFS::ParticleOverdrawFS()
    void ParticleOverdrawFS::ParticleOverdrawFS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f17800;
    }

    // 0x1008984d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleOverdrawFS::ParticleOverdrawFS(): jumps straight to the base-object constructor

    // 0x1008984e0, 240 bytes, placed by class name and debug map
    // ParticleOverdrawFS::GetSource(EffectManager const&, EffectList const&) const
    ParticleOverdrawFS* ParticleOverdrawFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char* pcVar2;
        undefined1 local_148[280];
        ViewTransformsFragment local_30[24];

        new (local_148) RT7PixelShaderSourceStream();
        poVar1 = (ostream*)(local_148 + 16);
        std::operator<<(poVar1, "in highp vec4 vWorldPosition;\n");
        local_30->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_30);
        local_30->~basic_string();
        pcVar2 = (char*)shadersourceprovider::GetShaderString(49);
        std::operator<<(poVar1, pcVar2);
        str();
        local_148->~RT7PixelShaderSourceStream();
        return this;
    }

    // 0x100898d20: the linker folded this into RT7VertexShaderSourceStream::~RT7VertexShaderSourceStream(), which has identical code
    RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream();

} // namespace jag::graphics

namespace jag {
    // 0x10089c0b0, 64 bytes, inline, placed by debug map only (low confidence)
    // graphics::Shader* placement_new<graphics::Shader, graphics::ShaderType&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned long&, graphics::EffectList const&, render::VertexDeclaration const&, graphics::EffectManager const&, unsigned char&, graphics::RenderPassType&>(void*, graphics::ShaderType&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned long&, graphics::EffectList const&, render::VertexDeclaration const&, graphics::EffectManager const&, unsigned char&, graphics::RenderPassType&)
    /* graphics::Shader* placement_new<graphics::Shader, graphics::ShaderType&,
   std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&,
   std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned
   long&, graphics::EffectList const&, render::VertexDeclaration const&,
   graphics::EffectManager const&, unsigned char&, graphics::RenderPassType&>(void*,
   graphics::ShaderType&, std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> > const&, std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> > const&, unsigned long&, graphics::EffectList const&,
   render::VertexDeclaration const&, graphics::EffectManager const&, unsigned char&,
   graphics::RenderPassType&) */

    Shader* jag::placement_new<graphics::Shader, graphics::ShaderType&,
                               std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                               std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                               unsigned long&, graphics::EffectList_const&, render::VertexDeclaration_const&,
                               graphics::EffectManager_const&, unsigned char&, graphics::RenderPassType&>(
        void* param_1, ShaderType* param_2, basic_string* param_3, basic_string* param_4, ulong* param_5,
        EffectList* param_6, VertexDeclaration* param_7, EffectManager* param_8, uchar* param_9,
        RenderPassType* param_10) {
        graphics::Shader::Shader(param_1, *(undefined4*)param_2, param_3, param_4, *param_5, param_6, param_7._0_4_,
                                 param_8._0_4_, *param_9, *(undefined4*)param_10);
        return param_1;
    }

    // 0x10089c0f0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Shader>* placement_new<ref_counter_shared<graphics::Shader>, int, graphics::Shader*&>(void*, int&&, graphics::Shader*&)
    ref_counter_shared* placement_new<ref_counter_shared<graphics::Shader>, int, graphics::Shader*&>(void* param_1,
                                                                                                     int* param_2,
                                                                                                     Shader** param_3) {
        ref_counter_shared<graphics::Shader>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10089dd10, 64 bytes, inline, placed by debug map only (low confidence)
    // bool operator< <graphics::Shader, graphics::Shader>(shared_ptr<graphics::Shader> const&, shared_ptr<graphics::Shader> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(shared_ptr<graphics::Shader> const&,
   shared_ptr<graphics::Shader> const&) */

    bool operator<(shared_ptr* param_1, shared_ptr* param_2) {
        Shader* local_20;
        Shader* local_18;

        local_20 = (Shader*)param_1->end();
        local_18 = (Shader*)param_2->end();
        return (bool)std::less<graphics::Shader*>::operator()(&local_20, &local_18);
    }

    // 0x10089e020, 32 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL> >, unsigned short>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, unsigned short const&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, unsigned short const&) */

    DataSerialise* operator<<(DataSerialise* param_1, ushort* param_2) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned short>(
            (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, param_2);
        return param_1;
    }

    // 0x10089e040, 32 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL> >, unsigned int>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, unsigned int const&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, unsigned int const&) */

    DataSerialise* operator<<(DataSerialise* param_1, uint* param_2) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned int>(
            (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, param_2);
        return param_1;
    }

} // namespace jag

// 0x100898c30, 32 bytes, placed by debug map only (low confidence)
// __libcpp_strstr(char const*, char const*)
void __libcpp_strstr(char* param_1, char* param_2) {
    _strstr(param_1, "aDummy");
}
