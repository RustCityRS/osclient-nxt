// libs/oldscape/jagex3/dash3d/SoftwarePix3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class SoftwarePix3D : public Pix3D // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SoftwarePix3D();
        virtual void PrepareRender();
        virtual void GouraudTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                     int arg9);
        virtual void FlatTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        virtual void TextureTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                     int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15,
                                     int arg16, int arg17, int arg18, int arg19);
        virtual void TextureTriangleAffine(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                           int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14,
                                           int arg15, int arg16, int arg17, int arg18, int arg19);
        SoftwarePix3D(SharedArray<unsigned int>& sharedArray, int arg2, int arg3);
        void SetDest(SharedArray<unsigned int>& sharedArray, int arg2, int arg3);
        void GouraudRaster(SharedArray<unsigned int>& sharedArray, int arg2, int arg3, int arg4, int arg5, int arg6,
                           int arg7, int arg8);
        void FlatRaster(SharedArray<unsigned int>& sharedArray, int arg2, int arg3, int arg4, int arg5, int arg6);
        void TextureRaster(SharedArray<unsigned int>& sharedArray, Array<unsigned int>& arg2, int arg3, int arg4,
                           int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12, int arg13,
                           int arg14, int arg15);
        void TextureRasterAffine(SharedArray<unsigned int>& sharedArray, Array<unsigned int>& arg2, int arg3, int arg4,
                                 int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                                 int arg13, int arg14, int arg15);

    private:
        uint8_t _unknown_120[24];
    };

    // 0x10012d4a0
    SoftwarePix3D::SoftwarePix3D(SharedArray<unsigned int>& sharedArray, int arg2, int arg3) : Pix3D() {
        SetDest(sharedArray, arg2, arg3);
    }

    // 0x100217920
    SoftwarePix3D::~SoftwarePix3D() {
        field_120.~SharedArray();
    }

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    // 0x1000e38e0
    void OSRenderCore_LogicThread_Common::SetWindowTopmost(bool arg1) {
        long lVar2 = field_0;
        *(bool*)(lVar2 + 19677533) = arg1;
        uint8_t* pbVar1 = (uint8_t*)(lVar2 + 19677544);
        *pbVar1 = *pbVar1 | 4;
    }

    // 0x1000e3940
    void OSRenderCore_LogicThread_Common::SetClientSize(int arg1, int arg2) {
        QuaternionT<float> local_38 = ((field_0 + 19677552))->GetClientRect(*((field_0 + 19677508)));
        auto piVar2 = local_38.second();
        if ((*piVar2 == arg1) && (piVar2 = (int*)local_38.qw(), *piVar2 == arg2)) {
            return;
        }
        long lVar1 = field_0;
        *(int*)(lVar1 + 19677516) = arg1;
        *(int*)(lVar1 + 19677520) = arg2;
        *(uint8_t*)(lVar1 + 19677544) = *(uint8_t*)(lVar1 + 19677544) | 1;
    }

    // 0x1000e39c0
    void OSRenderCore_LogicThread_Common::SetResizable(bool arg1) {
        long lVar2 = field_0;
        *(bool*)(lVar2 + 19677532) = arg1;
        uint8_t* pbVar1 = (uint8_t*)(lVar2 + 19677544);
        *pbVar1 = *pbVar1 | 2;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1000e3b70
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::ClientWindowMode>(
        oldscape::ClientWindowMode publishingPlatformType) {
        pT<signed char>(this, (schar)publishingPlatformType);
    }

} // namespace jag
