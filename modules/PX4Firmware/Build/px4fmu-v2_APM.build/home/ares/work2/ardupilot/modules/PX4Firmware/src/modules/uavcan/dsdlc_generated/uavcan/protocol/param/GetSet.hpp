/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/ares/work2/ardupilot/modules/uavcan/dsdl/uavcan/protocol/param/599.GetSet.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/protocol/param/Value.hpp>

/******************************* Source text **********************************
#
# Get or set a parameter by name or by index.
#

# If set - parameter will be assigned this value, then the new value will be returned
# If not set - current parameter value will be returned
Value value

# Index of the parameter starting from 0; ignored if name is nonempty
uint8 index

# Name of the parameter; always preferred over index if nonempty
uint8[<=40] name

---

# Actual parameter value. For write requests it must contain the newly assigned parameter value.
# Empty value indicates that there is no such parameter.
Value value

Value default_value  # Optional
Value max_value      # Optional
Value min_value      # Optional

# Empty name in response indicates that there is no such parameter
uint8[<=40] name
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.param.GetSet
uavcan.protocol.param.Value value
saturated uint8 index
saturated uint8[<=40] name
---
uavcan.protocol.param.Value value
uavcan.protocol.param.Value default_value
uavcan.protocol.param.Value max_value
uavcan.protocol.param.Value min_value
saturated uint8[<=40] name
******************************************************************************/

#undef value
#undef index
#undef name
#undef value
#undef default_value
#undef max_value
#undef min_value
#undef name

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace protocol
{
namespace param
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

struct UAVCAN_EXPORT GetSet_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::protocol::param::Value value;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > index;
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 40 > name;
        };

        enum
        {
            MinBitLen
                = FieldTypes::value::MinBitLen
                + FieldTypes::index::MinBitLen
                + FieldTypes::name::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::value::MaxBitLen
                + FieldTypes::index::MaxBitLen
                + FieldTypes::name::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::value >::Type value;
        typename ::uavcan::StorageType< typename FieldTypes::index >::Type index;
        typename ::uavcan::StorageType< typename FieldTypes::name >::Type name;

        Request_()
            : value()
            , index()
            , name()
        {
            enum { MaxByteLen = ::uavcan::BitLenToByteLen<MaxBitLen>::Result };
            ::uavcan::StaticAssert<int(MaxByteLen) <= int(::uavcan::MaxTransferPayloadLen)>::check();

            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<434 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);
    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::protocol::param::Value value;
            typedef ::uavcan::protocol::param::Value default_value;
            typedef ::uavcan::protocol::param::Value max_value;
            typedef ::uavcan::protocol::param::Value min_value;
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 40 > name;
        };

        enum
        {
            MinBitLen
                = FieldTypes::value::MinBitLen
                + FieldTypes::default_value::MinBitLen
                + FieldTypes::max_value::MinBitLen
                + FieldTypes::min_value::MinBitLen
                + FieldTypes::name::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::value::MaxBitLen
                + FieldTypes::default_value::MaxBitLen
                + FieldTypes::max_value::MaxBitLen
                + FieldTypes::min_value::MaxBitLen
                + FieldTypes::name::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::value >::Type value;
        typename ::uavcan::StorageType< typename FieldTypes::default_value >::Type default_value;
        typename ::uavcan::StorageType< typename FieldTypes::max_value >::Type max_value;
        typename ::uavcan::StorageType< typename FieldTypes::min_value >::Type min_value;
        typename ::uavcan::StorageType< typename FieldTypes::name >::Type name;

        Response_()
            : value()
            , default_value()
            , max_value()
            , min_value()
            , name()
        {
            enum { MaxByteLen = ::uavcan::BitLenToByteLen<MaxBitLen>::Result };
            ::uavcan::StaticAssert<int(MaxByteLen) <= int(::uavcan::MaxTransferPayloadLen)>::check();

            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<726 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);
    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 599 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.param.GetSet";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    GetSet_(); // Don't create objects of this type. Use Request/Response instead.
};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool GetSet_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        value == rhs.value &&
        index == rhs.index &&
        name == rhs.name;
}

template <int _tmpl>
bool GetSet_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(value, rhs.value) &&
        ::uavcan::areClose(index, rhs.index) &&
        ::uavcan::areClose(name, rhs.name);
}

template <int _tmpl>
int GetSet_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::value::encode(self.value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::index::encode(self.index, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::name::encode(self.name, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int GetSet_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::value::decode(self.value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::index::decode(self.index, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::name::decode(self.name, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool GetSet_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        value == rhs.value &&
        default_value == rhs.default_value &&
        max_value == rhs.max_value &&
        min_value == rhs.min_value &&
        name == rhs.name;
}

template <int _tmpl>
bool GetSet_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(value, rhs.value) &&
        ::uavcan::areClose(default_value, rhs.default_value) &&
        ::uavcan::areClose(max_value, rhs.max_value) &&
        ::uavcan::areClose(min_value, rhs.min_value) &&
        ::uavcan::areClose(name, rhs.name);
}

template <int _tmpl>
int GetSet_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::value::encode(self.value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::default_value::encode(self.default_value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::max_value::encode(self.max_value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::min_value::encode(self.min_value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::name::encode(self.name, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int GetSet_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::value::decode(self.value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::default_value::decode(self.default_value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::max_value::decode(self.max_value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::min_value::decode(self.min_value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::name::decode(self.name, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature GetSet_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xD316D89B5B15F483ULL);

    Request::FieldTypes::value::extendDataTypeSignature(signature);
    Request::FieldTypes::index::extendDataTypeSignature(signature);
    Request::FieldTypes::name::extendDataTypeSignature(signature);

    Response::FieldTypes::value::extendDataTypeSignature(signature);
    Response::FieldTypes::default_value::extendDataTypeSignature(signature);
    Response::FieldTypes::max_value::extendDataTypeSignature(signature);
    Response::FieldTypes::min_value::extendDataTypeSignature(signature);
    Response::FieldTypes::name::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef GetSet_ GetSet;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::param::GetSet > _uavcan_gdtr_registrator_GetSet;

}

} // Namespace uavcan
} // Namespace protocol
} // Namespace param

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::param::GetSet::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::param::GetSet::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::param::GetSet::Request >::stream(Stream& s, ::uavcan::protocol::param::GetSet::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "value: ";
    YamlStreamer< ::uavcan::protocol::param::GetSet::Request::FieldTypes::value >::stream(s, obj.value, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "index: ";
    YamlStreamer< ::uavcan::protocol::param::GetSet::Request::FieldTypes::index >::stream(s, obj.index, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "name: ";
    YamlStreamer< ::uavcan::protocol::param::GetSet::Request::FieldTypes::name >::stream(s, obj.name, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::param::GetSet::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::param::GetSet::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::param::GetSet::Response >::stream(Stream& s, ::uavcan::protocol::param::GetSet::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "value: ";
    YamlStreamer< ::uavcan::protocol::param::GetSet::Response::FieldTypes::value >::stream(s, obj.value, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "default_value: ";
    YamlStreamer< ::uavcan::protocol::param::GetSet::Response::FieldTypes::default_value >::stream(s, obj.default_value, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "max_value: ";
    YamlStreamer< ::uavcan::protocol::param::GetSet::Response::FieldTypes::max_value >::stream(s, obj.max_value, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "min_value: ";
    YamlStreamer< ::uavcan::protocol::param::GetSet::Response::FieldTypes::min_value >::stream(s, obj.min_value, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "name: ";
    YamlStreamer< ::uavcan::protocol::param::GetSet::Response::FieldTypes::name >::stream(s, obj.name, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace param
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::param::GetSet::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::param::GetSet::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::param::GetSet::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::param::GetSet::Response >::stream(s, obj, 0);
    return s;
}

}
}
}