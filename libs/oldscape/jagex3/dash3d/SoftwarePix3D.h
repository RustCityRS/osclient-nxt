// libs/oldscape/jagex3/dash3d/SoftwarePix3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class SoftwarePix3D : public Pix3D // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SoftwarePix3D();
        virtual PrepareRender();
        virtual void GouraudTriangle(int, int, int, int, int, int, int, int, int);
        virtual void FlatTriangle(int, int, int, int, int, int, int);
        virtual void TextureTriangle(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
                                     int, int, int);
        virtual void TextureTriangleAffine(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
                                           int, int, int, int);
        SoftwarePix3D(SharedArray<unsigned int>&, int, int);
        void SetDest(SharedArray<unsigned int>&, int, int);
        void GouraudRaster(SharedArray<unsigned int>&, int, int, int, int, int, int, int);
        void FlatRaster(SharedArray<unsigned int>&, int, int, int, int, int);
        void TextureRaster(SharedArray<unsigned int>&, Array<unsigned int, eastl::allocator>&, int, int, int, int, int,
                           int, int, int, int, int, int, int, int);
        void TextureRasterAffine(SharedArray<unsigned int>&, Array<unsigned int, eastl::allocator>&, int, int, int, int,
                                 int, int, int, int, int, int, int, int, int);

        // data members, from how the methods use this: 144 bytes, the first 120 are Pix3D
        char _unknown_120[24];
    };

    // 0x1000e32f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SoftwarePix3D::SoftwarePix3D(SharedArray<unsigned int>&, int, int): jumps straight to the base-object constructor

    // 0x10012d4a0, 128 bytes, base-object constructor, inline, placed by class name
    // SoftwarePix3D::SoftwarePix3D(SharedArray<unsigned int>&, int, int)
    void SoftwarePix3D::SoftwarePix3D(SharedArray* param_1, int param_2, int param_3) {
        new (this) Pix3D();
        field_0 = &PTR__SoftwarePix3D_100efb088;
        new (&field_120) SharedArray<unsigned int>();
        SetDest(this, param_1, param_2, param_3);
    }

    // 0x100217620, 16 bytes, complete-object destructor, inline, placed by class name
    // SoftwarePix3D::~SoftwarePix3D(): jumps straight to the base-object destructor

    // 0x100217920, 48 bytes, base-object destructor, inline, placed by class name
    // SoftwarePix3D::~SoftwarePix3D()
    void SoftwarePix3D::~SoftwarePix3D() {
        field_0 = &PTR__SoftwarePix3D_100efb088;
        (&field_120)->~SharedArray();
        ~Pix3D();
    }

    // 0x100324d00, 32 bytes, deleting destructor, inline, placed by class name
    // SoftwarePix3D::~SoftwarePix3D()
    void SoftwarePix3D::~SoftwarePix3D() {
        ~SoftwarePix3D(this);
        operator_delete(this);
    }

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    // 0x1000e38e0, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::SetWindowTopmost(bool)
    void OSRenderCore_LogicThread_Common::SetWindowTopmost(bool param_1) {
        byte* pbVar1;
        long lVar2;

        lVar2 = field_0;
        *(bool*)(lVar2 + 19677533) = param_1;
        pbVar1 = (byte*)(lVar2 + 19677544);
        *pbVar1 = *pbVar1 | 4;
    }

    // 0x1000e3940, 128 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::SetClientSize(int, int)
    void OSRenderCore_LogicThread_Common::SetClientSize(int param_1, int param_2) {
        long lVar1;
        int* piVar2;
        QuaternionT<float> local_38[16];

        local_38->GetClientRect((WindowSetOptions*)(field_0 + 19677552));
        piVar2 = (int*)local_38->second();
        if ((*piVar2 == param_1) && (piVar2 = (int*)jag::math::QuaternionT<float>::qw(local_38), *piVar2 == param_2)) {
            return;
        }
        lVar1 = field_0;
        *(int*)(lVar1 + 19677516) = param_1;
        *(int*)(lVar1 + 19677520) = param_2;
        *(byte*)(lVar1 + 19677544) = *(byte*)(lVar1 + 19677544) | 1;
    }

    // 0x1000e39c0, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::SetResizable(bool)
    void OSRenderCore_LogicThread_Common::SetResizable(bool param_1) {
        byte* pbVar1;
        long lVar2;

        lVar2 = field_0;
        *(bool*)(lVar2 + 19677532) = param_1;
        pbVar1 = (byte*)(lVar2 + 19677544);
        *pbVar1 = *pbVar1 | 2;
    }

} // namespace jag::oldscape

namespace jag::oldscape::movement {
    // 0x1000e3360, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ExactTileDestination::ExactTileDestination(ExactTileDestination const&): jumps straight to the base-object constructor

} // namespace jag::oldscape::movement

namespace jag {
    // 0x1000e3b70, 16 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p1<oldscape::ClientWindowMode>(oldscape::ClientWindowMode)
    /* void PacketT<Array<unsigned char, BucketAllocatorEASTL>
   >::p1<oldscape::shared::LoginProt::ID>(oldscape::shared::LoginProt::ID) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, char param_2) {
        pT<signed char>(this, (int)param_2);
    }

} // namespace jag
