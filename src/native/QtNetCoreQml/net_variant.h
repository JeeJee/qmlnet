#ifndef NET_VARIANT_H
#define NET_VARIANT_H

#include "net_instance.h"
#include <QVariant>

class NetVariant
{
public:
    NetVariant();
    ~NetVariant();
    NetVariantTypeEnum GetVariantType();
    void SetNetInstance(NetInstance* netInstance);
    NetInstance* GetNetInstance();
    void SetBool(bool value);
    bool GetBool();
    void SetInt(int value);
    int GetInt();
private:
    void ClearNetInstance();
    QVariant variant;
};

#endif // NET_VARIANT_H
