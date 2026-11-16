// libs/graphics/runetek7/effects/viewportlookupscale/ViewportLookupScale.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class JointPose {
    public:
        JointPose* operator=(JointPose const&);
        JointPose(JointPose const&);
        JointPose(JointPose&&);
        JointPose();

        // data members, from how the methods use this: 48 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
    };

    class ViewportLookupScale {
    public:
        class Data;
        // virtual methods in vtable order
        virtual ~ViewportLookupScale();
        virtual void Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        GetData() const;
        void SetShaderConstants(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&) const;
        void SetViewportLookupScale(render::Viewport const&, math::Vector2T<float> const&);
        void SetData(Data const&);
        ViewportLookupScale(RT7Core&, int);

        // data members, from how the methods use this: 192 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[8];
        JointPose field_32; // offset 32
        char _unknown_80[72];
        uint field_152; // offset 152
        char _unknown_156[36];
    };

    class ViewportLookupScale::Data {
    public:
        JointPose* operator=(Data const&);
        Data();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    // 0x10091f620, 64 bytes, inline, placed by class name and debug map
    // ViewportLookupScale::Data::operator=(ViewportLookupScale::Data const&)
    /* JointPose::TEMPNAMEPLACEHOLDERVALUE(JointPose const&) */

    JointPose* JointPose::operator=(JointPose* param_1) {
        math::Rect<float>::operator=((Rect<float>*)this, (Rect*)param_1);
        math::Rect<float>::operator=((Rect<float>*)&field_16, (Rect*)&param_1->field_16);
        math::Rect<float>::operator=((Rect<float>*)&field_32, (Rect*)&param_1->field_32);
        return this;
    }

    // 0x100922030, 16 bytes, complete-object destructor, inline, placed by class name
    // ViewportLookupScale::~ViewportLookupScale(): jumps straight to the base-object destructor

    // 0x100922040, 32 bytes, deleting destructor, inline, placed by class name
    // ViewportLookupScale::~ViewportLookupScale()
    void ViewportLookupScale::~ViewportLookupScale() {
        ~ViewportLookupScale(this);
        operator_delete(this);
    }

    // 0x1009236c0, 48 bytes, base-object destructor, inline, placed by class name
    // ViewportLookupScale::~ViewportLookupScale()
    void ViewportLookupScale::~ViewportLookupScale() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__ViewportLookupScale_100f19808;
        (&field_80)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093d5b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ViewportLookupScale::ViewportLookupScale(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093d5d0, 96 bytes, base-object constructor, inline, placed by class name
    // ViewportLookupScale::ViewportLookupScale(RT7Core&, int)
    void ViewportLookupScale::ViewportLookupScale(RT7Core* param_1, int param_2) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__ViewportLookupScale_100f19808;
        new (field_32) Data();
        new (&field_80) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_152 = param_2;
    }

    // 0x10093d630, 16 bytes, complete-object constructor, inline, placed by class name
    // ViewportLookupScale::Data::Data(): jumps straight to the base-object constructor

    // 0x10093d640, 96 bytes, base-object constructor, inline, placed by class name
    // ViewportLookupScale::Data::Data()
    void ViewportLookupScale::Data::Data() {
        new (this) ImVec4(1.0, 1.0, 0.0, 0.0);
        new (&field_16, 0.0, 0.0, 0.0, 0.0) ImVec4();
        new (&field_32, 1.0, 1.0, 0.0, 0.0) ImVec4();
    }

} // namespace jag::graphics
