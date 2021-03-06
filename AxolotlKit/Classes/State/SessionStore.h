//
//  SessionStore.h
//  AxolotlKit
//
//  Created by Frederic Jacobs on 12/10/14.
//  Copyright (c) 2014 Frederic Jacobs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SessionRecord.h"

@protocol SessionStore <NSObject>



/**
 *  Returns a copy of the SessionRecord corresponding to the recipientId + deviceId tuple or a new SessionRecord if one does not currently exist.
 *
 *  @param contactIdentifier The recipientId of the remote client.
 *  @param deviceId          The deviceId of the remote client.
 *
 *  @return a copy of the SessionRecord corresponding to the recipientId + deviceId tuple.
 */

- (SessionRecord*)loadSession:(long)contactIdentifier deviceId:(int)deviceId;

- (NSArray*)subDevicesSessions:(long)contactIdentifier;

- (void)storeSession:(long)contactIdentifier deviceId:(int)deviceId session:(SessionRecord*)session;

- (BOOL)containsSession:(long)contactIdentifier deviceId:(int)deviceId;

- (void)deleteSessionForContact:(long)contactIdentifier deviceId:(int)deviceId;

- (void)deleteAllSessionsForContact:(long)contactIdentifier;

@end
