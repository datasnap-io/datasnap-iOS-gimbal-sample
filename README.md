datasnap-iOS-gimbal-sample
===========
  This sample app shows an example of an integration using the Gimbal SDK and how you would use our analytics SDK to capture events.  This shoud give a developer enough code to get started.
  
## Usage
  
Pull down this project: 
```bash
git pull --recursive https://github.com/datasnap-io/datasnap-iOS-gimbal-sample.git
```
  
Setup client with your Organization keys. We are using our Test Keys as an example:
```objective-c
[DataSnapClient setupWithOrganizationID:@"3HRhnUtmtXnT1UHQHClAcP"
                                 APIKey:@"1EM53HT8597CC7Q5QP0U8DN73"
                              APISecret:@"CcduyakRsZ8AQ/HLdXER2EjsCOlf29CTFVk/BctFmQM"];
```
  
Then run it on a ACTUAL device. 
  
  
You will notice this app is pretty basic and will just log Gimbal events such as Sightings and Geofences and is configured to look for Beacons and Geofences around the Datasnap.io corporate office.
  
  
  
  
  
