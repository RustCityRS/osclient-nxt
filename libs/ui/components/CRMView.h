// libs/ui/components/CRMView.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class CRMView : public Component // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~CRMView();
        virtual uint64_t GetType() const;
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        CRMView();
        void ServiceRequests();
        bool HasStateChanged() const;
        void GetState() const;
        bool RequestsComplete() const;
        void GenerateServerTriggerPayloadData();
        void OpenActionURL();
        void Setup(const eastl::string& str, HideOnErrorMode hideOnErrorMode);
        static bool m_debugDrawImageBounds; // = 0
        static bool m_debugDrawLabelBounds; // = 0
        static bool m_debugDrawClickBounds; // = 0

    private:
        uint8_t _unknown_368[112];
        HideOnErrorMode field_480;
        uint8_t _unknown_484[28];
        CRMData field_512;
        uint8_t _unknown_824[56];
        int field_880;
        uint8_t field_884;
        uint8_t _unknown_885[15];
        uint32_t field_900;
        uint8_t field_904;
        uint8_t field_905;
        uint8_t _unknown_906[6];
    };

    // 0x100689fb0
    bool CRMView::HasStateChanged() const {
        return GetState() != field_900;
    }

    // 0x100689fd0
    void CRMView::GetState() const {
        field_512->GetX();
    }

    // 0x100689ff0
    bool CRMView::RequestsComplete() const {
        int iVar1 = GetState();
        bool bVar2 = true;
        if (iVar1 != 2) {
            iVar1 = GetState();
            bVar2 = iVar1 == 4;
        }
        return bVar2;
    }

    // 0x1006ad030
    uint64_t CRMView::GetType() const {
        return 18;
    }

} // namespace jag::ui
