//
// Generated file, do not edit! Created by nedtool 5.6 from inet/routing/bgpv4/BgpCommon.msg.
//

#ifndef __INET__BGP_BGPCOMMON_M_H
#define __INET__BGP_BGPCOMMON_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {
namespace bgp {

} // namespace bgp
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs


namespace inet {
namespace bgp {

/**
 * Enum generated from <tt>inet/routing/bgpv4/BgpCommon.msg:24</tt> by nedtool.
 * <pre>
 * enum BgpSessionType
 * {
 *     IGP = 0;
 *     EGP = 1;
 *     INCOMPLETE = 2;
 * }
 * </pre>
 */
enum BgpSessionType {
    IGP = 0,
    EGP = 1,
    INCOMPLETE = 2
};

/**
 * Enum generated from <tt>inet/routing/bgpv4/BgpCommon.msg:31</tt> by nedtool.
 * <pre>
 * enum BgpPathSegmentType
 * {
 *     AS_SET = 1;
 *     AS_SEQUENCE = 2;
 * }
 * </pre>
 */
enum BgpPathSegmentType {
    AS_SET = 1,
    AS_SEQUENCE = 2
};

} // namespace bgp
} // namespace inet

#endif // ifndef __INET__BGP_BGPCOMMON_M_H

