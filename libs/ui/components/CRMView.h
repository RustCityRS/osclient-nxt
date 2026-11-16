// libs/ui/components/CRMView.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class CRMView : public Component // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~CRMView();
        virtual GetType() const;
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        CRMView();
        void ServiceRequests();
        bool HasStateChanged() const;
        void GetState() const;
        bool RequestsComplete() const;
        void GenerateServerTriggerPayloadData();
        void OpenActionURL();
        Setup(eastl::basic_string<char, BucketAllocatorEASTL> const&, HideOnErrorMode);
        static /* 1 bytes */ m_debugDrawImageBounds; // = 0
        static /* 1 bytes */ m_debugDrawLabelBounds; // = 0
        static /* 1 bytes */ m_debugDrawClickBounds; // = 0

        // data members, from how the methods use this: 912 bytes, the first 368 are Component
        char _unknown_368[80];
        undefined1 field_448; // offset 448
        char _unknown_449[31];
        int field_480; // offset 480
        char _unknown_484[28];
        CRMData field_512; // offset 512
        char _unknown_824[56];
        int field_880;        // offset 880
        undefined1 field_884; // offset 884
        char _unknown_885[15];
        undefined4 field_900; // offset 900
        undefined1 field_904; // offset 904
        undefined1 field_905; // offset 905
        char _unknown_906[6];
    };

    // 0x100689fb0, 32 bytes, inline, placed by class name and debug map
    // CRMView::HasStateChanged() const
    bool CRMView::HasStateChanged() {
        return GetState(this) != field_900;
    }

    // 0x100689fd0, 32 bytes, inline, placed by class name and debug map
    // CRMView::GetState() const
    void CRMView::GetState() {
        field_512->GetX();
    }

    // 0x100689ff0, 48 bytes, inline, placed by class name and debug map
    // CRMView::RequestsComplete() const
    bool CRMView::RequestsComplete() {
        int iVar1;
        bool bVar2;

        iVar1 = GetState(this);
        bVar2 = true;
        if (iVar1 != 2) {
            iVar1 = GetState(this);
            bVar2 = iVar1 == 4;
        }
        return bVar2;
    }

    // 0x1006ad030, 16 bytes, inline, placed by class name
    // CRMView::GetType() const
    undefined8 CRMView::GetType() {
        return 18;
    }

} // namespace jag::ui
