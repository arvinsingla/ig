<div data-ng-app="eventApp" class="_event-wrapper" ng-class="eventSettings.theme" data-ng-controller="eventController">
  <div class="_loading" ng-show="!isLoaded">
    <div class="bullet"></div>
    <div class="bullet"></div>
    <div class="bullet"></div>
    <div class="bullet"></div>
  </div>
  <div class="_event" ng-show="isLoaded">
    <div class="_header">
      <div class="_title">{{ eventSettings.title }}</div>
      <div class="_hashtag">#{{ eventSettings.hashtag }}</div>
    </div>
    <div class="_photo-wrapper" ng-repeat="item in items">
      <img ng-show="$index === currentItemIndex" class="_photo-background" ng-src="{{ item.item }}" />
      <img ng-show="$index === currentItemIndex" class="_photo" ng-src="{{ item.item }}" />
      <div ng-show="$index === currentItemIndex" class="_photo_details">
        <img class="_avatar" ng-src="{{ item.profilePicture }}" />
        <div class="_caption">{{ item.fullName }} <span ng-if="item.fullName && item.caption">-</span> {{ item.caption }}</div>
      </div>
    </div>
  </div>
</div>
