//
//  SPiDTokenRequest
//  SPiDSDK
//
//  Copyright (c) 2012 Schibsted Payment. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPiDRequest.h"
#import "SPiDAccessToken.h"

/** `SPiDTokenRequest` handles a token request against SPiD. */

@interface SPiDTokenRequest : SPiDRequest

/** Creates a client token request

 @param completionHandler
 @param completionHandler Called on token request completion or error
 @return The token request or nil if JWT could not be created
*/
+ (SPiDTokenRequest *)clientTokenRequestWithCompletionHandler:(void (^)(NSError *error))completionHandler;

/** Creates a user token request with authorization code

 @param code The authorization code
 @param completionHandler Called on token request completion or error
 @return The token request or nil if JWT could not be created
*/
+ (SPiDTokenRequest *)userTokenRequestWithCode:(NSString *)code completionHandler:(void (^)(NSError *))completionHandler;

/** Creates a user token request with user credentials

 @param username The username
 @param password The password
 @param completionHandler Called on token request completion or error
 @return The token request or nil if JWT could not be created
*/
+ (SPiDTokenRequest *)userTokenRequestWithUsername:(NSString *)username password:(NSString *)password completionHandler:(void (^)(NSError *error))completionHandler;

/** Creates a JWT facebook token request

 @param appId Facebook appID
 @param facebookToken Facebook access token
 @param expirationDate Expiration date for the facebook token
 @param completionHandler Called on token request completion or error
 @return The token request or nil if JWT could not be created
*/
+ (SPiDTokenRequest *)userTokenRequestWithFacebookAppID:(NSString *)appId facebookToken:(NSString *)facebookToken expirationDate:(NSDate *)expirationDate completionHandler:(void (^)(NSError *))completionHandler;

/** Creates a token refresh token request with the current access token

 @param completionHandler Called on token request completion or error
 @return The token request or nil if refresh token is missing
*/
+ (SPiDTokenRequest *)refreshTokenRequestWithCompletionHandler:(void (^)(NSError *))completionHandler;


@end