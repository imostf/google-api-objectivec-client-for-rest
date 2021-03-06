// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Stackdriver Trace API (cloudtrace/v1)
// Description:
//   Send and retrieve trace data from Stackdriver Trace. Data is generated and
//   available by default for all App Engine applications. Data from other
//   applications can be written to Stackdriver Trace for display, reporting,
//   and analysis.
// Documentation:
//   https://cloud.google.com/trace

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudTraceCloudPlatform;
/**
 *  Authorization scope: Write Trace data for a project or application
 *
 *  Value "https://www.googleapis.com/auth/trace.append"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudTraceTraceAppend;
/**
 *  Authorization scope: Read Trace data for a project or application
 *
 *  Value "https://www.googleapis.com/auth/trace.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudTraceTraceReadonly;

// ----------------------------------------------------------------------------
//   GTLRCloudTraceService
//

/**
 *  Service for executing Stackdriver Trace API queries.
 *
 *  Send and retrieve trace data from Stackdriver Trace. Data is generated and
 *  available by default for all App Engine applications. Data from other
 *  applications can be written to Stackdriver Trace for display, reporting, and
 *  analysis.
 */
@interface GTLRCloudTraceService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRCloudTraceQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
